#!/bin/bash
cd
mkdir ABC
echo "123456" > a.txt
mv a.txt ABC/b.txt
echo "789" >> ABC/b.txt
cat ABC.b.txt
echo "1, komandas izpilde ir pabeigta"
