/*
 *
 * Copyright 2019 gRPC authors.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#import <GRPCClient/GRPCInterceptor.h>

NS_ASSUME_NONNULL_BEGIN

@interface GRPCCall2Internal : NSObject<GRPCInterceptorInterface>

- (instancetype)init;

- (void)setResponseHandler:(id<GRPCResponseHandler>)responseHandler;

- (void)startWithRequestOptions:(GRPCRequestOptions *)requestOptions
                    callOptions:(nullable GRPCCallOptions *)callOptions;

- (void)writeData:(NSData *)data;

- (void)finish;

- (void)cancel;

- (void)receiveNextMessages:(NSUInteger)numberOfMessages;

@end

NS_ASSUME_NONNULL_END
