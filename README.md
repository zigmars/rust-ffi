# macOS fix
Some cmake generated files have 'libclient.so' instead of 'libclient.dylib'

So do a replace in between `cmake` & `make`.
```sh
cmake -DCMAKE_PREFIX_PATH=$(brew --prefix qt5) ..
sed -i '' 's/libclient.so/libclient.dylib/' gui/CMakeFiles/gui.dir/build.make
sed -i '' 's/libclient.so/libclient.dylib/' client/CMakeFiles/client.dir/build.make
sed -i '' 's/libclient.so/libclient.dylib/' gui/CMakeFiles/gui.dir/link.txt
make
```
<!-- LC_ALL=C find ./ -type f -exec sed -i '' -e "s/libclient.so/libclient.dylib/g" {} \; -->
