cmd_/node-v4.2.6/out/Release/obj/gen/debug-support.cc := LD_LIBRARY_PATH=/node-v4.2.6/out/Release/lib.host:/node-v4.2.6/out/Release/lib.target:$$LD_LIBRARY_PATH; export LD_LIBRARY_PATH; cd ../deps/v8/tools/gyp; mkdir -p /node-v4.2.6/out/Release/obj/gen; python ../../tools/gen-postmortem-metadata.py "/node-v4.2.6/out/Release/obj/gen/debug-support.cc" ../../src/objects.h ../../src/objects-inl.h