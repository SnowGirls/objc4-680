#import <Foundation/Foundation.h>

@interface Foo : NSObject

- (void)cat;

@end


@protocol FooProtocol <NSObject>

- (void)touch;

@end


@interface Foo (Addition) <FooProtocol>

@property (nonatomic, copy) NSString *name;

- (void)cat;

- (void)more;

+ (void)less;

@end
