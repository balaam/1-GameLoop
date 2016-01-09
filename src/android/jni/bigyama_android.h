
//BIGYAMA ANDROID
#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

/* External Java functions are defined here.
   i.e. JNIEXPORT void JNICALL Java_com_bigyama_test_appRenderer_nativeRender
        (JNIEnv *, jobject obj);
*/
    JNIEXPORT void JNICALL Java_com_bigyama_dinodeck_DDRenderer_nativeClear(
        JNIEnv*, jobject obj);

    JNIEXPORT void JNICALL Java_com_bigyama_dinodeck_DDRenderer_nativeUpdate(
        JNIEnv*, jobject obj, float dt);

    JNIEXPORT void JNICALL Java_com_bigyama_dinodeck_DDRenderer_nativeResize(
        JNIEnv*, jobject obj, int width, int height, float dpiX, float dpiY);

#ifdef __cplusplus
}
#endif
