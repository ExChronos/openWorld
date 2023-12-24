const express = require("express")

const app = express()

app.get("/:name", (req, res) =>{
    const { name } = req.params

    res.json({message: `Hello, ${name}`})
})

app.listen(3000, () => {
    console.log("Server listening on port 3000")
})