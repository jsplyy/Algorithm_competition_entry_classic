import os
import sys

print os.getcwd()
list_dir = os.listdir('.')

if len(sys.argv) < 2:
    print 'Please input chapter number.'
    exit(0)

ch_num = sys.argv[1]
new_dir = 'chapter_'+ch_num
if new_dir not in list_dir:
    os.mkdir(new_dir)

os.chdir('/'.join([os.getcwd(),new_dir]))
print os.getcwd()
for i in range(1,11):
    new_fname = 'd_'+ch_num+'_'+str(i)+'.cpp'
    print '/'.join([new_dir,new_fname])
    os.system('cd .>' + new_fname)