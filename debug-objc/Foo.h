#import <Foundation/Foundation.h>

@interface Foo : NSObject

- (void)cat;

@end


#pragma mark - Category One

@interface Foo (One)

- (void)cat;

@end



#pragma mark - Category Two

@protocol FooProtocol <NSObject>

- (void)touch;

@end


@interface Foo (Two) <FooProtocol>

@property (nonatomic, copy) NSString *name;

- (void)cat;

- (void)more;

+ (void)less;

@end
