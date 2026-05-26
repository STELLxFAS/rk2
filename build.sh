#!/bin/bash
set -e

echo "Building..."
rm -rf build
mkdir build
cd build
cmake .. -DCMAKE_BUILD_TYPE=Release
cmake --build .
ctest --output-on-failure
cpack

echo "Creating Release folder..."
cd ..
mkdir -p Release
cp build/*.deb Release/

echo "Done! Package: $(ls Release/*.deb)"
