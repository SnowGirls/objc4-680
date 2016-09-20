#import "Foo.h"

@implementation Foo

- (void)cat {
    NSLog(@"Foo");
}

@end


@implementation Foo (Addition)

- (void)cat {
    NSLog(@"Addition");
}

- (void)more {
    
}

+ (void)less {
    
}

#pragma mark - FooProtocol

- (void)touch {
    
}

@end
