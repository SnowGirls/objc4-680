#import "Foo.h"

@implementation Foo

- (void)cat {
    NSLog(@"Foo");
}

@end



#pragma mark - Category One

@implementation Foo (One)

- (void)cat {
    NSLog(@"One");
}

@end



#pragma mark - Category Two

@implementation Foo (Two)

- (void)cat {
    NSLog(@"Two");
}

- (void)more {
    
}

+ (void)less {
    
}

#pragma mark - FooProtocol

- (void)touch {
    
}

@end
