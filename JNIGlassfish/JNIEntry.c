/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <jni.h>
#include <stdio.h>
#include "com_e2dev_jni_NativeSingleton.h"

JNIEXPORT void JNICALL Java_com_e2dev_jni_NativeSingleton_nativePrint
        (JNIEnv *env, jobject obj)
{

    printf("\nHello World from C\n");

}

/*
 * Class:     com_e2dev_jni_NativeSingleton
 * Method:    getTestNumber
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_e2dev_jni_NativeSingleton_getTestNumber
  (JNIEnv * env, jobject obj){
    return 154;
}

