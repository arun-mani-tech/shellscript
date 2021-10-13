#!/bin/bash

####################### Shell Script details ###############################

# Authhor name 	    :  A.Arunmani

# Last modified date:  13-oct-2021

# Script purpose    : Give a path, find all the JPEG image files (should not be 
#                    done with file extension .jpeg) and move it into ~/Pictures                     directory.
 

######################### Comment EOD ######################################## 

function clean()
{
	sleep $1
	clear
}

function sleepfun()
{
	clear
	echo "please wait."; clean 1
	echo "please wait.."; clean 1
	echo "please wait..."; clean 1
}

sleepfun
sleepfun

dirname="/home/elcot/Pictures"

if [ ! -d $dirname ]
then
	mkdir -p $dirname
fi

for picture in /home/elcot/png/*
do 
       
    
       find $picture -type f -exec sh -c 'file --mime-type "$0" | grep -q image/jpeg\$ && printf "$0\n" ' {} \; -exec mv {} $dirname \; 
       
       var=1

done
	if [ $var -eq 1 ]
	then

		echo  -e "\n\nsuccessfully moved -> $dirname "
	fi





