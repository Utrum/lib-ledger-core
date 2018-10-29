// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#include "NJSBitcoinLikeAccountCpp.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSBitcoinLikeAccount::getUTXO) {

    //Check if method called with right number of arguments
    if(info.Length() != 2)
    {
        return Nan::ThrowError("NJSBitcoinLikeAccount::getUTXO needs 2 arguments");
    }

    //Check if parameters have correct types
    auto arg_0 = Nan::To<int32_t>(info[0]).FromJust();
    auto arg_1 = Nan::To<int32_t>(info[1]).FromJust();

    //Create promise and set it into Callcack
    auto arg_2_resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    NJSBitcoinLikeOutputListCallback *njs_ptr_arg_2 = new NJSBitcoinLikeOutputListCallback(arg_2_resolver);
    std::shared_ptr<NJSBitcoinLikeOutputListCallback> arg_2(njs_ptr_arg_2);


    //Unwrap current object and retrieve its Cpp Implementation
    NJSBitcoinLikeAccount* obj = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeAccount>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeAccount::getUTXO : implementation of BitcoinLikeAccount is not valid");
    }
    cpp_impl->getUTXO(arg_0,arg_1,arg_2);
    info.GetReturnValue().Set(arg_2_resolver->GetPromise());
}
NAN_METHOD(NJSBitcoinLikeAccount::getUTXOCount) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSBitcoinLikeAccount::getUTXOCount needs 0 arguments");
    }

    //Check if parameters have correct types

    //Create promise and set it into Callcack
    auto arg_0_resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    NJSI32Callback *njs_ptr_arg_0 = new NJSI32Callback(arg_0_resolver);
    std::shared_ptr<NJSI32Callback> arg_0(njs_ptr_arg_0);


    //Unwrap current object and retrieve its Cpp Implementation
    NJSBitcoinLikeAccount* obj = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeAccount>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeAccount::getUTXOCount : implementation of BitcoinLikeAccount is not valid");
    }
    cpp_impl->getUTXOCount(arg_0);
    info.GetReturnValue().Set(arg_0_resolver->GetPromise());
}
NAN_METHOD(NJSBitcoinLikeAccount::broadcastRawTransaction) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSBitcoinLikeAccount::broadcastRawTransaction needs 1 arguments");
    }

    //Check if parameters have correct types
    vector<uint8_t> arg_0;
    Local<Array> arg_0_container = Local<Array>::Cast(info[0]);
    for(uint32_t arg_0_id = 0; arg_0_id < arg_0_container->Length(); arg_0_id++)
    {
        if(arg_0_container->Get(arg_0_id)->IsUint32())
        {
            auto arg_0_elem = Nan::To<uint32_t>(arg_0_container->Get(arg_0_id)).FromJust();
            arg_0.emplace_back(arg_0_elem);
        }
    }


    //Create promise and set it into Callcack
    auto arg_1_resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    NJSStringCallback *njs_ptr_arg_1 = new NJSStringCallback(arg_1_resolver);
    std::shared_ptr<NJSStringCallback> arg_1(njs_ptr_arg_1);


    //Unwrap current object and retrieve its Cpp Implementation
    NJSBitcoinLikeAccount* obj = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeAccount>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeAccount::broadcastRawTransaction : implementation of BitcoinLikeAccount is not valid");
    }
    cpp_impl->broadcastRawTransaction(arg_0,arg_1);
    info.GetReturnValue().Set(arg_1_resolver->GetPromise());
}
NAN_METHOD(NJSBitcoinLikeAccount::broadcastTransaction) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSBitcoinLikeAccount::broadcastTransaction needs 1 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    NJSBitcoinLikeTransaction *njs_ptr_arg_0 = static_cast<NJSBitcoinLikeTransaction *>(Nan::GetInternalFieldPointer(njs_arg_0,0));
    if(!njs_ptr_arg_0)
    {
        return Nan::ThrowError("NodeJs Object to NJSBitcoinLikeTransaction failed");
    }
    auto arg_0 = njs_ptr_arg_0->getCppImpl();


    //Create promise and set it into Callcack
    auto arg_1_resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    NJSStringCallback *njs_ptr_arg_1 = new NJSStringCallback(arg_1_resolver);
    std::shared_ptr<NJSStringCallback> arg_1(njs_ptr_arg_1);


    //Unwrap current object and retrieve its Cpp Implementation
    NJSBitcoinLikeAccount* obj = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeAccount>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeAccount::broadcastTransaction : implementation of BitcoinLikeAccount is not valid");
    }
    cpp_impl->broadcastTransaction(arg_0,arg_1);
    info.GetReturnValue().Set(arg_1_resolver->GetPromise());
}
NAN_METHOD(NJSBitcoinLikeAccount::buildTransaction) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSBitcoinLikeAccount::buildTransaction needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSBitcoinLikeAccount* obj = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeAccount>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeAccount::buildTransaction : implementation of BitcoinLikeAccount is not valid");
    }

    auto result = cpp_impl->buildTransaction();

    //Wrap result in node object
    auto arg_0_wrap = NJSBitcoinLikeTransactionBuilder::wrap(result);
    auto arg_0 = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeTransactionBuilder>(arg_0_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_0);
}

NAN_METHOD(NJSBitcoinLikeAccount::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSBitcoinLikeAccount function can only be called as constructor (use New)");
    }
    NJSBitcoinLikeAccount *node_instance = new NJSBitcoinLikeAccount(nullptr);

    if(node_instance)
    {
        //Wrap and return node instance
        node_instance->Wrap(info.This());
        node_instance->Ref();
        info.GetReturnValue().Set(info.This());
    }
}


Nan::Persistent<ObjectTemplate> NJSBitcoinLikeAccount::BitcoinLikeAccount_prototype;

Handle<Object> NJSBitcoinLikeAccount::wrap(const std::shared_ptr<ledger::core::api::BitcoinLikeAccount> &object) {
    Nan::HandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(BitcoinLikeAccount_prototype);

    Handle<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance();
        NJSBitcoinLikeAccount *new_obj = new NJSBitcoinLikeAccount(object);
        if(new_obj)
        {
            new_obj->Wrap(obj);
            new_obj->Ref();
        }
    }
    else
    {
        Nan::ThrowError("NJSBitcoinLikeAccount::wrap: object template not valid");
    }
    return obj;
}

NAN_METHOD(NJSBitcoinLikeAccount::isNull) {
    NJSBitcoinLikeAccount* obj = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeAccount>(info.This());
    auto cpp_implementation = obj->getCppImpl();
    auto isNull = !cpp_implementation ? true : false;
    return info.GetReturnValue().Set(Nan::New<Boolean>(isNull));
}

void NJSBitcoinLikeAccount::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSBitcoinLikeAccount::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSBitcoinLikeAccount").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"getUTXO", getUTXO);
    Nan::SetPrototypeMethod(func_template,"getUTXOCount", getUTXOCount);
    Nan::SetPrototypeMethod(func_template,"broadcastRawTransaction", broadcastRawTransaction);
    Nan::SetPrototypeMethod(func_template,"broadcastTransaction", broadcastTransaction);
    Nan::SetPrototypeMethod(func_template,"buildTransaction", buildTransaction);
    //Set object prototype
    BitcoinLikeAccount_prototype.Reset(objectTemplate);
    Nan::SetPrototypeMethod(func_template,"isNull", isNull);

    //Add template to target
    target->Set(Nan::New<String>("NJSBitcoinLikeAccount").ToLocalChecked(), func_template->GetFunction());
}