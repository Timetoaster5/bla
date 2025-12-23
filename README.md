# bla
bla is a archiving format. 

# todo 
make it do archiving stuff.
I think I will just have it let you input a single directory as a file 
instead of anything fancy like letting you string multiple files together
with multiple inputs. 
1 input file, 1 output file. 
also 1 input for creating or extracting archive. But I think I will 
also make an effort to have it detect if it needs to extract or create. 

bla file.bla 
will output file 

bla file file.bla 
will create file.bla from file 

If I do this I would like it to look for bla headers inside of file.bla 
to detect it should extract rather than looking at the .bla extension.

Add looking at directories and sub-directories 

Make it not just print the contents of a single file (best cat clone in 2025 right here)

currently im thinking do something like this for writing: 
1. open dir 
2. read dir
3. check if each file is directory or normal file
4. if directory, the contents of that directory need to be added to
the current directory struct (if possible to do it like that) 
5. if normal file, append the contents of the file to the output file
6. if something else probably error?
7. I also need to add a proper header to each file (including information about
sub-directories that it was under), actually info about sub-directories should be
written to the files in step 4.  
