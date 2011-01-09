/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSArray, MFError, ActivityMonitor, Account;



@interface AccountValidator : NSObject 
{
    Account *_account;
    id _delegate;
    ActivityMonitor *_accountValidationActivity;
    struct { 
        unsigned int useSSL : 1; 
        unsigned int incomingServerSupportsSSL : 1; 
        unsigned int smtpServerSupportsSSL : 1; 
        unsigned int validationInProgress : 1; 
        unsigned int canceled : 1; 
        unsigned int unused : 27; 
    } _flags;
    MFError *_incomingServerValidationError;
    MFError *_smtpServerValidationError;
    NSArray *_incomingServerAuthSchemes;
    NSArray *_smtpServerAuthSchemes;
}


- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)validateAccount:(id)arg1 useSSL:(BOOL)arg2;
- (id)account;
- (void)cancelValidation;
- (id)_ispAccountInfo;
- (void)_validateAccount:(id)arg1;
- (BOOL)_incomingServerValid;
- (BOOL)_outgoingServerValid;
- (void)_updateValidationStatusForAccount:(id)arg1 status:(id)arg2;
- (void)_backgroundValidateAccountFinished:(id)arg1 authSchemes:(id)arg2;
- (void)stop;
- (BOOL)accountValidationCanceled;
- (void)_validateAccountInBackground:(id)arg1;
- (BOOL)accountIsValid;
- (BOOL)accountSupportsSSL;
- (id)error;

@end
