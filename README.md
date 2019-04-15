# gr-roi
upecialize GNURadio OOT(Out of Tree) Module for Project ROI

## 安装

```
mkdir build
cmake ..
make 
sudo make install
sudo ldconfig
```

## 修改配置

修改gnuradioConfig.cmake，仿照其他模块，加入
```
GR_MODULE(ROI gnuradio-roi roi/api.h gnuradio-roi)
```

