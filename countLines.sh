#!/bin/bash 
# Ask for the absolute file path
read -p 'What is the absolute file path?: ' filePath
declare -i counter=0
while read line
do
    echo "$line"
    counter+=1 
done < "$filePath"
echo "$counter"
