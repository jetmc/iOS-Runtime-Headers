/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface MLSQLiteConnection_RegisteredFunctionFunction : MLSQLiteConnection_RegisteredFunction  {
    int (*_function)();
}


- (void)registerOnDB:(struct sqlite3 { }*)arg1;

@end
