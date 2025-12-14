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
