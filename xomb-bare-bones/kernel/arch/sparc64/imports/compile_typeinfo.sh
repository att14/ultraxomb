cd ..
for item in kernel/runtime/std/typeinfo/*.d;
do
	echo "--> $item"
	sparc64-sun-xomb-gdc -nostdlib -I. -m64 -Ikernel/runtime/. -c $item -o build/dsss_objs/G/`echo $item | grep -o "[^/]*.d$"`.o ;\
done
cd build
