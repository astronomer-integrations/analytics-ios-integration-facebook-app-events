#import <Foundation/Foundation.h>
#import <MetarouterAnalytics/SEGIntegration.h>

@interface SEGFacebookAppEventsIntegration : NSObject<SEGIntegration>

@property(nonatomic, strong) NSDictionary *settings;

- (id)initWithSettings:(NSDictionary *)settings;

@end
