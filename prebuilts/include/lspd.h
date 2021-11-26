namespace lspd {
    extern "C" void onModuleLoaded();

    extern "C" void nativeForkAndSpecializePre(JNIEnv *env, jclass, jint *_uid, jint *,
            jintArray *gids, jint *,
            jobjectArray *, jint *,
            jstring *, jstring *nice_name,
            jintArray *, jintArray *,
            jboolean *start_child_zygote, jstring *,
            jstring *app_data_dir, jboolean *,
            jobjectArray *,
            jobjectArray *,
            jboolean *,
            jboolean *);

    extern "C" void nativeForkAndSpecializePost(JNIEnv *env, jclass, jint res);

    extern "C" void nativeForkSystemServerPre(JNIEnv *env, jclass, uid_t *, gid_t *,
            jintArray *, jint *,
            jobjectArray *, jlong *,
            jlong *);

    extern "C" void nativeForkSystemServerPost(JNIEnv *env, jclass, jint res);

    extern "C" void specializeAppProcessPre(JNIEnv *env, jclass, jint *_uid, jint *,
            jintArray *gids, jint *,
            jobjectArray *, jint *,
            jstring *, jstring *nice_name,
            jboolean *start_child_zygote, jstring *,
            jstring *app_data_dir, jboolean *,
            jobjectArray *,
            jobjectArray *,
            jboolean *,
            jboolean *);

    extern "C" void specializeAppProcessPost(JNIEnv *env, jint uid);
}
