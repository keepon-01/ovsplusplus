git config --global user.name  “aaa”
git config --global user.email "aa@qq.com"

#special 
ssh-keygen -t ecdsa -b 521 -C "971171923@qq.com"


git config --global http.proxy http://10.128.236.56:10809
git config --global https.proxy https://10.128.236.56:10809

cd .git


git remote add origin git@github.com:keepon-01/ovsplusplus.git

git push -f origin master

