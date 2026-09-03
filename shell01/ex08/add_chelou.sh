#!/bin/sh
echo "$FT_NBR1 + $FT_NBR2" | sed "s/'/0/g; s/\\\\/1/g; s/\"/2/g; s/?/3/g; s/!/4/g; s/m/0/g; s/r/1/g; s/d/2/g; s/o/3/g; s/c/4/g" | xargs echo "ibase=5; obase=23;" | bc | tr '0123456789ABCDE' 'gtaio luSnemf'
