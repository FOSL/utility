.PHONY: release
release:
	+@mkdir -p build && \
	cd build && \
	cmake $(shell python ./script/cmake_release_flags.py) .. && \
	cmake --build . && \
	ctest

.PHONY: debug
debug:
	+@mkdir -p build && \
	cd build && \
	cmake $(shell python ./script/cmake_debug_flags.py) .. && \
	cmake --build . && \
	ctest

.PHONY: clean
clean:
	rm -r ./build
