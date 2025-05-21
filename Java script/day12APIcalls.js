// fetch API API-Application Programming Interace
// It provides an interface for fetching(receiving/sending) resources.
// It uses request and respond objects
// The fetch () method is used to fetch a data
// let promise = fetch(URL,[options])
// We use only url of API calls as use of another  url it works but shows erroe

const URL ="https://catfact.ninja/facts?limit=1&max_length=140"
const getFacts = async () => {
    console.log("Loading data ..");
    let response=await fetch(URL);
    console.log(response.status);
    console.log(response);
    let data=await response.json();
    console.log(data[0]);
};
console.log(getFacts());

// AIAX is Asynchronous JS and XML
// JSON is Java script Object Notation
// JSON() method : returns a seconf promise that resolves with result of parsing the response body text as JSON(Input is JSON,obj is JSobject)
