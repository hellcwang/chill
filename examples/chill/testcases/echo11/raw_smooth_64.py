from chill import *

source('raw_smooth_64.c')
procedure('main')

original()
print()

##SYNTAX:: add_ghosts : 
#statement number
#loop level of the new loop to be inserted
#depth of ghost zone
#enable holding in the innermost loop fixed: 1->yes 0->no(default)
add_ghosts([0],1,4,1)
print()
