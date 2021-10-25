This project was extracted from this video [Calcula el numero pi con granos de arroz](https://fb.watch/8RSbsBC2Z2/)

## Install compiler (linux)
```
sudo apt-get update
sudo apt-get install buil-essential manpages-dev
```

## Verify version and location of installation
```
gcc --version
whereis gcc
which gcc
```

## Compile file
```
g++ pi-value.cpp -o exe-pi-value
```

## Finally run the compiled file
```
./exe-pi-value
```

## Output example
```
Pi vale: 3.69311
```