# Magman
Hello people! we are going to dig into magman's cave. Watch out!

Magman is a movable monster living in volcanic cave. He can speak random sentences, which is very annoying. We can harm him by gently poking to reduce hit point (HP). He will temporary sleep when HP is less than or equal to zero. 
##git
To clone:

```
    git clone https://github.com/wasit7/Magman.git
```

To reset all local files and pull:

```
    git fetch --all
    git reset --hard origin/master
    git pull
```
To add all and commit:
```
    git add -A && git commit
```

To push:
```
    git push
```

##spec
Please code follwing the specification below.
###Movable
```cpp
    float Posx
    float Posy
    void addDisplacement(float x, float y)
    vod printPos()
```
###Speakable
```cpp
    void addSentence(string )
    void printSentence()
```
###Vulnerable
```cpp
    int hp
    void updateHp(int d); hp=hp+d;
    bool isDead();
```
## code start here
code...
