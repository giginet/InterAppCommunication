//
//  NSString+IACExtensions.h
//  IACSample
//
//  Created by Antonio Cabezuelo Vivo on 10/02/13.
//  Copyright (c) 2013 Antonio Cabezuelo Vivo. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (IACExtensions)

+ (NSString *)stringWithUUID;

- (NSString *)stringByAppendingURLParams:(NSDictionary *)params;

- (NSDictionary *)parseURLParams;

@end

NS_ASSUME_NONNULL_END
