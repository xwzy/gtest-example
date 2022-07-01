# gtest-example



$ git clone https://github.com/google/googletest.git
$ cd googletest
$ mkdir build
$ cd build
$ cmake ..
$ make
$ sudo make install



## Setup

```cpp
class SomeTest : public ::testing::Test 
{
protected:
    virtual void SetUp() override 
    {
        // ...
    }
	
    virtual void TearDown() override 
    {	
        // ...	
    }	
};
```