#include <jni.h>
#include <string>

std::string SERVER_URL = "http://gesportal.net/rest-api/";
std::string API_KEY = "2o6reu03m8s2uqfbblan8p5b";
std::string PURCHASE_CODE = "*********************";
std::string ONESIGNAL_APP_ID = "*******************";
std::string TERMS_URL = "https://oxoo.spagreen.net/demo/php/v13/terms/";


//WARNING: ==>> Don't change anything below.
extern "C" JNIEXPORT jstring JNICALL
Java_com_code_files_AppConfig_getApiServerUrl(
        JNIEnv *env,
        jclass clazz) {
    return env->NewStringUTF(SERVER_URL.c_str());
}

extern "C" JNIEXPORT jstring JNICALL
Java_com_code_files_AppConfig_getApiKey(
        JNIEnv *env,
        jclass clazz) {
    return env->NewStringUTF(API_KEY.c_str());
}

extern "C" JNIEXPORT jstring JNICALL
Java_com_code_files_AppConfig_getPurchaseCode(
        JNIEnv *env,
        jclass clazz) {
    return env->NewStringUTF(PURCHASE_CODE.c_str());
}

extern "C" JNIEXPORT jstring JNICALL
Java_com_code_files_AppConfig_getOneSignalAppID(
        JNIEnv *env,
        jclass clazz) {
    return env->NewStringUTF(ONESIGNAL_APP_ID.c_str());
}

extern "C" JNIEXPORT jstring JNICALL
Java_com_code_files_AppConfig_getTermsUrl(
        JNIEnv *env,
        jclass clazz) {
    return env->NewStringUTF(TERMS_URL.c_str());
}