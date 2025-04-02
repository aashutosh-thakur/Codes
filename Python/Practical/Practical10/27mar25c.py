# Unique Email Addresses· You're given a list of email addresses where each address consists of a local name and a domain name separated by the '@' symbol. You need to determine the number of unique email domains.
def domaim_extractor(emails):
    unique_email_domain = set()
    for email in emails:
        domain = email.split('@')[1]
        unique_email_domain.add(domain)
    return unique_email_domain
emails = ["ashu@yahoo.com","komu@hotmail.com","patil@gmail.com","asswani@hotmail.com","ash@yahoo.com"]
print(domaim_extractor(emails))
print("Count: ", len(domaim_extractor(emails)))