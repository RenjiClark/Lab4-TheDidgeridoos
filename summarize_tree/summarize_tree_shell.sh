#!/bin/bash

dirCount=$(find $1 -type d | wc -l)
fileCount=$(find $1 -type f | wc -l)
echo "Processed all the files from <$1>".
echo "There were $dirCount directories."
echo "There were $fileCount files."
