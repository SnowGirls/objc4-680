//
//  main.m
//  debug-objc
//
//  Created by maninthemiddle on 9/9/16.
//
//

#import <Foundation/Foundation.h>
#import "Foo.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // insert code here...
        Foo *foo = [[Foo alloc] init];
        [foo cat];
        Class cls = [Foo class];
        NSLog(@"Pointer of Class Foo: %p", cls);
    }
    return 0;
}
