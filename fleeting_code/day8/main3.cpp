std::string draw() const override {
    std::ostringstream ss;

    // STEP 1: The Opening Tag
    ss << "<g>\n"; 

    // STEP 2: The Loop (The Manager walking down the line of workers)
    for (const auto& child : drawings) {

        // STEP 3: The Delegation (The "Magic" Line)
        ss << child->draw() << "\n"; 
    }

    // STEP 4: The Closing Tag
    ss << "</g>";

    return ss.str();
}
