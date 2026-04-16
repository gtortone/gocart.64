#include <ff.h>
#include <cstddef>

bool filesystem_mount(void);
bool filesystem_unmount(void);
size_t filesystem_getfree(void);
bool filesystem_getlabel(char *label);

bool file_open(FIL *file, const char *file_name, uint8_t mode);
uint32_t file_read(FIL *file, void *buffer, size_t bytes);
bool file_seek(FIL *file, FSIZE_t offset);
uint32_t file_write(FIL *file, void *buffer, size_t bytes);
bool file_truncate(FIL *file);
bool file_sync(FIL *file);
bool file_close(FIL *file);
bool file_stat(const char *file_name, FILINFO *file_info);
bool file_delete(const char *file_name);

bool dir_change(const char *path);
bool dir_current(char *path, size_t path_size);
bool dir_open(DIR *dir, const char *pattern);
bool dir_read(DIR *dir, FILINFO *file_info);
bool dir_close(DIR *dir);
