/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@class AXIPCClient, AXIPCServer, NSString;

@interface AXServer : NSObject {
    AXIPCClient *_client;
    AXIPCServer *_server;
    NSString *_serverIdentifier;
    BOOL _shouldRegisterClientCallbackSourceOnMainRunloop;
}

@property(retain) AXIPCClient * client;
@property(retain) AXIPCServer * server;
@property(copy) NSString * serverIdentifier;
@property BOOL shouldRegisterClientCallbackSourceOnMainRunloop;

- (BOOL)_connectIfNecessary;
- (void)_connectServerIfNecessary;
- (void)_didConnectToClient;
- (void)_didConnectToServer;
- (id)_serviceName;
- (void)_wasDisconnectedFromClient;
- (void)_willClearServer;
- (id)client;
- (void)dealloc;
- (id)sendMessage:(id)arg1;
- (void)sendSimpleMessage:(id)arg1;
- (BOOL)sendSimpleMessageWithResult:(id)arg1;
- (id)server;
- (id)serverIdentifier;
- (void)setClient:(id)arg1;
- (void)setServer:(id)arg1;
- (void)setServerIdentifier:(id)arg1;
- (void)setShouldRegisterClientCallbackSourceOnMainRunloop:(BOOL)arg1;
- (BOOL)shouldRegisterClientCallbackSourceOnMainRunloop;

@end
