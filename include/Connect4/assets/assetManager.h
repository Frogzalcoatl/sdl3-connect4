#include "Connect4/tools/dynamicArray.h"
#include <vfs/vfs_c.h>


typedef struct C4_AssetData {
    void* data;
    size_t size;
} C4_AssetData;

typedef struct C4_AssetManager {
    vfs_t* vfs;

} C4_AssetManager;