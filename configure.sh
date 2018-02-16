export PKG_CONFIG_PATH=/usr/lib/x86_64-linux-gnu/lib/pkgconfig/
./autogen.sh --prefix=/usr/lib/x86_64-linux-gnu/ --enable-gles2 --with-egl-platforms=drm2 --enable-gbm --enable-shared-glapi --with-dri-drivers=i915,i965 --with-gallium-drivers=swrast
