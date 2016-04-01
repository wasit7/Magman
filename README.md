# Magman
Hello people! we are going to hit magman.

Magman is a movable monster living in volcanic cave. He can speak random sentences, which is very annoying. We can harm him by gently poking to reduce hit point (HP). He will temporary sleep when HP is less than or equal to zero. 
##git
To clone:
>> git clone https://github.com/wasit7/cs402

To reset all local files and pull:
>> git fetch --all
>> git reset --hard origin/master
>> git pull

To add all and commit:
>> git add -A && git commit

To push:
>> git push

##spec
Movable
>>	Float Posx
>>	Float Posy
>>	Void addDisplacement(float x, float y)
>>	printPos()
Speakable
>>	Void addSentence(string )
>>	Void printSentence()
Vulnerable
>>	Int hp
>>	Void updateHp(int d); hp=hp+d;
>>	Bool isDead();

## code start here
code...
