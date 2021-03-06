#include <jni.h>
#include <string>
#include <opencv2/core.hpp>

extern "C" {
    jstring
    Java_com_company_cpp_hellocv_MainActivity_stringFromJNI(
            JNIEnv *env,
            jobject /* this */) {
        cv::Mat image(320, 240, CV_8UC3, cv::Scalar(0,0,0)); // Proof OpenCv is linking.
        std::string hello = "Hello from C++";
        return env->NewStringUTF(hello.c_str());
    }

    //DRS 20160822c - Added native method
    jstring
    Java_com_company_cpp_hellocv_MainActivity_validate(JNIEnv *env, jobject, jlong addrGray, jlong addrRgba) {
        cv::Rect();
        cv::Mat();
        std::string hello2 = "Hello from validate";
        return env->NewStringUTF(hello2.c_str());
    }
}
