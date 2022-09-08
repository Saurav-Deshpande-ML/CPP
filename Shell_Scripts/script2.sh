#! /usr/bin/bash
trap "echo exit signal detected." 0 2 15
# file=/home/noisy/Desktop/C++/file1.txt
# trap "rm $file" 0 2 15
echo "Pid is $$"
i=0
while [ $i -lt 50 ]
do 
    echo $i
    (( i++ ))
    sleep 5
done
