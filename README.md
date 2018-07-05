# hello-opencv

- Configure OpenCV cmake with a custom `CMAKE_INSTALL_PREFIX`, for example `CMAKE_INSTALL_PREFIX=install`
- Build OpenCV (`make` and `make install`)
- Copy `lib` and `include` from `build/install` directory to `hello-opencv` directory
- Run `make`
- Run `./hello-opencv`

The makefile passes linker option `-rfile $ORIGIN/lib` so that the binary is portable, as long as the OpenCV libraries are present in `./lib`.
