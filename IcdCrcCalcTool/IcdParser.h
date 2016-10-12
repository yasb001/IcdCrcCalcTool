#ifndef _ICDPARSER_H
#define _ICDPARSER_H

class CIcdParser
{
public:
    CIcdParser(LPCTSTR lpFilePath);
    virtual ~CIcdParser();

    CString GetHeaderVersion() const;
    CString GetIedType() const;
    CString GetCrc() const;

    BOOL Parse();
    CString GetErrorMessage() const;

private:
    void ParseBuffer(LPSTR lpText);

private:
    CString m_strFilePath;
    CString m_strHeaderVersion;
    CString m_strIedType;
    CString m_strCrc;
    CString m_strErrorMessage;
};

#endif /* _ICDPARSER_H */