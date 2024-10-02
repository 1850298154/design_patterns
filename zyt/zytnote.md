https://blog.csdn.net/Whimsically_/article/details/140988075

https://blog.csdn.net/weixin_34342578/article/details/88589942

$ make latex
$ cd build/latex
$ make


$ make latexpdf


g++ main.cpp *.cpp -o output.exe


递归搜索子目录：
如果你想要从当前目录及其所有子目录中查找 .cpp 文件，可以使用以下命令：

cmd
dir /s *.cpp
输出到文件：
如果你希望将结果保存到一个文本文件中，可以使用重定向：

cmd
dir *.cpp > cpp_files.txt



dir /b：以裸格式列出文件名，不显示额外的信息。

dir /s *.cpp
dir /b *.cpp
for %f in (*.cpp) do @echo %~nxf
for %f in (*.cpp) do gcc "%f" -o "%~nf.exe"
