/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_jeffplaisance_mmap_NativeUtils */

#ifndef _Included_com_jeffplaisance_mmap_NativeUtils
#define _Included_com_jeffplaisance_mmap_NativeUtils
#ifdef __cplusplus
extern "C" {
#endif
#undef com_jeffplaisance_mmap_NativeUtils_MAP_FAILED
#define com_jeffplaisance_mmap_NativeUtils_MAP_FAILED -1LL
#undef com_jeffplaisance_mmap_NativeUtils_EACCES
#define com_jeffplaisance_mmap_NativeUtils_EACCES 1L
#undef com_jeffplaisance_mmap_NativeUtils_EAGAIN
#define com_jeffplaisance_mmap_NativeUtils_EAGAIN 2L
#undef com_jeffplaisance_mmap_NativeUtils_EBADF
#define com_jeffplaisance_mmap_NativeUtils_EBADF 3L
#undef com_jeffplaisance_mmap_NativeUtils_EINVAL
#define com_jeffplaisance_mmap_NativeUtils_EINVAL 4L
#undef com_jeffplaisance_mmap_NativeUtils_ENFILE
#define com_jeffplaisance_mmap_NativeUtils_ENFILE 5L
#undef com_jeffplaisance_mmap_NativeUtils_ENODEV
#define com_jeffplaisance_mmap_NativeUtils_ENODEV 6L
#undef com_jeffplaisance_mmap_NativeUtils_ENOMEM
#define com_jeffplaisance_mmap_NativeUtils_ENOMEM 7L
#undef com_jeffplaisance_mmap_NativeUtils_EPERM
#define com_jeffplaisance_mmap_NativeUtils_EPERM 8L
#undef com_jeffplaisance_mmap_NativeUtils_ETXTBSY
#define com_jeffplaisance_mmap_NativeUtils_ETXTBSY 9L
#undef com_jeffplaisance_mmap_NativeUtils_EOVERFLOW
#define com_jeffplaisance_mmap_NativeUtils_EOVERFLOW 10L
#undef com_jeffplaisance_mmap_NativeUtils_EINTR
#define com_jeffplaisance_mmap_NativeUtils_EINTR 11L
#undef com_jeffplaisance_mmap_NativeUtils_EIO
#define com_jeffplaisance_mmap_NativeUtils_EIO 12L
#undef com_jeffplaisance_mmap_NativeUtils_EEXIST
#define com_jeffplaisance_mmap_NativeUtils_EEXIST 13L
#undef com_jeffplaisance_mmap_NativeUtils_EFBIG
#define com_jeffplaisance_mmap_NativeUtils_EFBIG 14L
#undef com_jeffplaisance_mmap_NativeUtils_EISDIR
#define com_jeffplaisance_mmap_NativeUtils_EISDIR 15L
#undef com_jeffplaisance_mmap_NativeUtils_EMFILE
#define com_jeffplaisance_mmap_NativeUtils_EMFILE 16L
#undef com_jeffplaisance_mmap_NativeUtils_ENAMETOOLONG
#define com_jeffplaisance_mmap_NativeUtils_ENAMETOOLONG 17L
#undef com_jeffplaisance_mmap_NativeUtils_EDQUOT
#define com_jeffplaisance_mmap_NativeUtils_EDQUOT 18L
#undef com_jeffplaisance_mmap_NativeUtils_ELOOP
#define com_jeffplaisance_mmap_NativeUtils_ELOOP 19L
#undef com_jeffplaisance_mmap_NativeUtils_ENOENT
#define com_jeffplaisance_mmap_NativeUtils_ENOENT 20L
#undef com_jeffplaisance_mmap_NativeUtils_ENOSPC
#define com_jeffplaisance_mmap_NativeUtils_ENOSPC 21L
#undef com_jeffplaisance_mmap_NativeUtils_ENOTDIR
#define com_jeffplaisance_mmap_NativeUtils_ENOTDIR 22L
#undef com_jeffplaisance_mmap_NativeUtils_ENXIO
#define com_jeffplaisance_mmap_NativeUtils_ENXIO 23L
#undef com_jeffplaisance_mmap_NativeUtils_EROFS
#define com_jeffplaisance_mmap_NativeUtils_EROFS 24L
#undef com_jeffplaisance_mmap_NativeUtils_PROT_EXEC
#define com_jeffplaisance_mmap_NativeUtils_PROT_EXEC 1L
#undef com_jeffplaisance_mmap_NativeUtils_PROT_READ
#define com_jeffplaisance_mmap_NativeUtils_PROT_READ 2L
#undef com_jeffplaisance_mmap_NativeUtils_PROT_WRITE
#define com_jeffplaisance_mmap_NativeUtils_PROT_WRITE 4L
#undef com_jeffplaisance_mmap_NativeUtils_PROT_NONE
#define com_jeffplaisance_mmap_NativeUtils_PROT_NONE 8L
#undef com_jeffplaisance_mmap_NativeUtils_MAP_SHARED
#define com_jeffplaisance_mmap_NativeUtils_MAP_SHARED 1L
#undef com_jeffplaisance_mmap_NativeUtils_MAP_PRIVATE
#define com_jeffplaisance_mmap_NativeUtils_MAP_PRIVATE 2L
#undef com_jeffplaisance_mmap_NativeUtils_MAP_ANON
#define com_jeffplaisance_mmap_NativeUtils_MAP_ANON 4L
#undef com_jeffplaisance_mmap_NativeUtils_O_RDONLY
#define com_jeffplaisance_mmap_NativeUtils_O_RDONLY 1L
#undef com_jeffplaisance_mmap_NativeUtils_O_WRONLY
#define com_jeffplaisance_mmap_NativeUtils_O_WRONLY 2L
#undef com_jeffplaisance_mmap_NativeUtils_O_RDWR
#define com_jeffplaisance_mmap_NativeUtils_O_RDWR 4L
#undef com_jeffplaisance_mmap_NativeUtils_O_CREAT
#define com_jeffplaisance_mmap_NativeUtils_O_CREAT 8L
#undef com_jeffplaisance_mmap_NativeUtils_O_TRUNC
#define com_jeffplaisance_mmap_NativeUtils_O_TRUNC 16L
#undef com_jeffplaisance_mmap_NativeUtils_O_APPEND
#define com_jeffplaisance_mmap_NativeUtils_O_APPEND 32L
#undef com_jeffplaisance_mmap_NativeUtils_O_EXCL
#define com_jeffplaisance_mmap_NativeUtils_O_EXCL 64L
/*
 * Class:     com_jeffplaisance_mmap_NativeUtils
 * Method:    mmap0
 * Signature: (JJIIIJ)J
 */
JNIEXPORT jlong JNICALL Java_com_jeffplaisance_mmap_NativeUtils_mmap0
  (JNIEnv *, jclass, jlong, jlong, jint, jint, jint, jlong);

/*
 * Class:     com_jeffplaisance_mmap_NativeUtils
 * Method:    munmap0
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_com_jeffplaisance_mmap_NativeUtils_munmap0
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_jeffplaisance_mmap_NativeUtils
 * Method:    open
 * Signature: (Ljava/lang/String;II)I
 */
JNIEXPORT jint JNICALL Java_com_jeffplaisance_mmap_NativeUtils_open
  (JNIEnv *, jclass, jstring, jint, jint);

/*
 * Class:     com_jeffplaisance_mmap_NativeUtils
 * Method:    close0
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_jeffplaisance_mmap_NativeUtils_close0
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_jeffplaisance_mmap_NativeUtils
 * Method:    ftruncate0
 * Signature: (IJ)I
 */
JNIEXPORT jint JNICALL Java_com_jeffplaisance_mmap_NativeUtils_ftruncate0
  (JNIEnv *, jclass, jint, jlong);

/*
 * Class:     com_jeffplaisance_mmap_NativeUtils
 * Method:    errno
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_jeffplaisance_mmap_NativeUtils_errno
  (JNIEnv *, jclass);

/*
 * Class:     com_jeffplaisance_mmap_NativeUtils
 * Method:    getDirectBufferAddress
 * Signature: (Ljava/nio/ByteBuffer;)J
 */
JNIEXPORT jlong JNICALL Java_com_jeffplaisance_mmap_NativeUtils_getDirectBufferAddress
  (JNIEnv *, jclass, jobject);

#ifdef __cplusplus
}
#endif
#endif
