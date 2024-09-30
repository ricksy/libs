cmake example of a multi library 
===============================


This is an example of how to create a multi level library project.

```bash
├── CMakeLists.txt
├── CMakePresets.json
├── levelone
│   ├── CMakeLists.txt
│   ├── include
│   │   └── l2a.hpp
│   ├── leveltwo_a
│   │   ├── CMakeLists.txt
│   │   ├── include
│   │   │   └── l2a.hpp
│   │   └── src
│   │       └── l2a.cpp
│   └── leveltwo_b
│       ├── CMakeLists.txt
│       ├── include
│       │   └── l2b.hpp
│       └── src
│           └── l2b.cpp
└── main.cpp
```


