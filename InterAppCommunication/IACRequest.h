//
//  IACRequest.h
//  IACSample
//
//  Created by Antonio Cabezuelo Vivo on 09/02/13.
//  Copyright (c) 2013 Antonio Cabezuelo Vivo. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class IACClient;

@interface IACRequest : NSObject

@property (copy, readonly, nonatomic) NSString *requestID;
@property (strong, nonatomic) IACClient *client;
@property (copy, nonatomic, nullable) NSString *action;
@property (strong, nonatomic, nullable) NSDictionary *parameters;
@property (copy, nonatomic, nullable) void(^successCalback)(NSDictionary * _Nullable);
@property (copy, nonatomic, nullable) void(^errorCalback)(NSError * _Nullable);

@end

NS_ASSUME_NONNULL_END
