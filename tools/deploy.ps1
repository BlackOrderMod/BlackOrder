if ( ![bool](Test-Path -Path "P:")) {
     Write-Host "Arma 3 P: is not mounted..." -ForegroundColor Red
     exit 1
}

# Set version
if ( !($args) ) {
     $tagVersion = git describe --tags --abbrev=0
} else {
     $tagVersion = $args
}

Write-Host "Build version $tagVersion"
$version = $tagVersion.Split(".")
$versionMajor = $version[0]
$versionMinor = $version[1]
$versionPatch = $version[2]
$versionBuild = 0

sed -e "s/DevBuild/$tagVersion/g" "../mod.cpp" | Set-Content "../mod.cpp"

Set-Content -Path '../addons/main/script_version.hpp' -Value "#define MAJOR $versionMajor
#define MINOR $versionMinor
#define PATCHLVL $versionPatch
#define BUILD $versionBuild"

# Build release
py make.py ci

# Fix compact
Move-Item "../release/@blackorder/optionals/@blackorder_ace_compat" -Destination "../release/"
Copy-Item "../Extra/Resources/ACE Compat/mod.cpp" -Destination "../release/@blackorder_ace_compat/mod.cpp"
Copy-Item "../Extra/Resources/ACE Compat/logo_blackorder_ca.paa" -Destination "../release/@blackorder_ace_compat/logo_blackorder_ca.paa"
Remove-Item "../release/@blackorder/optionals" -Force -Recurse
sed -e "s/DevBuild/$tagVersion/g" "../release/@blackorder_ace_compat/mod.cpp" | Set-Content "../release/@blackorder_ace_compat/mod.cpp"

cd ../release/
zip -r "blackorder_v$versionMajor.$versionMinor.$versionPatch.zip" "@blackorder/"
zip -r "blackorder_ace_compat_v$versionMajor.$versionMinor.$versionPatch.zip" "@blackorder_ace_compat/"
cd ../tools/

# Clean up
Write-Host "Restoring version files..."
git checkout origin/master ../addons/main/script_version.hpp
git checkout origin/master ../mod.cpp
