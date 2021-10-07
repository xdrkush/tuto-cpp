#include <CkHttp.h>
#include <CkHttpResponse.h>

void ChilkatSample(void)
{
    // This requires the Chilkat API to have been previously unlocked.
    // See Global Unlock Sample for sample code

    CkHttp http;

    // Add a few custom headers.
    http.SetRequestHeader("Client-ID", "my_client_id");
    http.SetRequestHeader("Client-Token", "my_client_token");

    http.put_Accept("application/json");

    const char *url = "https://api.fiscallog.eu/sign/v1";
    const char *jsonRequestBody = "{ .... }";
    CkHttpResponse *resp = http.PostJson2(url, "application/json", jsonRequestBody);
    if (http.get_LastMethodSuccess() == false)
    {
        std::cout << http.lastErrorText() << "\r\n";
        return;
    }

    std::cout << "Response status code = " << resp->get_StatusCode() << "\r\n";
    const char *jsonResponseStr = resp->bodyStr();

    std::cout << jsonResponseStr << "\r\n";

    delete resp;
}